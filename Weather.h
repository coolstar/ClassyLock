@class NSArray, NSString;

@interface WeatherPreferences : NSObject <NSURLConnectionDelegate>
{
    _Bool _isCelsius;
    NSString *_UUID;
    NSString *_serviceHost;
    _Bool _serviceDebugging;
    NSArray *_lastUbiquitousWrittenDefaults;
//    id <SynchronizedDefaultsDelegate> _syncDelegate;
    NSString *_yahooWeatherURLString;
    NSString *_twcURLString;
}

+ (id)serviceDebuggingPath;
+ (void)clearSharedPreferences;
+ (id)sharedPreferences;
@property(copy, nonatomic) NSString *twcURLString; // @synthesize twcURLString=_twcURLString;
//@property(nonatomic) id <SynchronizedDefaultsDelegate> syncDelegate; // @synthesize syncDelegate=_syncDelegate;
- (void)_clearCachedObjects;
- (void)resetLocale;
- (void)saveToUbiquitousStore;
- (id)combineCloudCities:(id)arg1 withExisting:(id)arg2 byAppending:(_Bool)arg3;
- (void)_saveUbiquitousDefaults:(id)arg1;
- (void)_setLastUbiquitousWrittenDefaults:(id)arg1 isCloudCityArray:(_Bool)arg2;
- (void)_synchronizedDefaultsDidChange:(id)arg1;
- (void)_syncToCloudIfNotDefaultCities:(id)arg1;
- (_Bool)_areDefaultCities:(id)arg1;
- (id)_cityArrayToCloudCityArray:(id)arg1;
- (_Bool)serviceDebugging;
- (_Bool)isLocalWeatherEnabled;
- (void)setLocalWeatherEnabled:(_Bool)arg1;
- (id)readDefaultValueForKey:(id)arg1;
- (void)writeDefaultValue:(id)arg1 forKey:(id)arg2;
- (id)secondBacksideLogoImage;
- (id)primaryBacksideLogoImage;
- (id)logoButtonImage;
- (id)_cacheDirectoryPath;
- (id)yahooLogoURL;
- (id)twcLogoURL;
- (id)serviceHost;
- (id)UUID;
- (void)synchronizeStateToDisk;
- (void)setActiveCity:(unsigned long long)arg1;
- (int)loadActiveCity;
- (id)loadSavedCities;
- (id)_defaultCities;
- (id)_ppt_addFakeTestCities;
- (void)saveToDiskWithCities:(id)arg1 activeCity:(unsigned long long)arg2;
- (void)saveToDiskWithCities:(id)arg1;
- (void)saveToDiskWithCity:(id)arg1 forActiveIndex:(unsigned long long)arg2;
- (id)loadSavedCityAtIndex:(long long)arg1;
- (void)saveToDiskWithLocalWeatherCity:(id)arg1;
- (id)localWeatherCity;
- (id)cityFromPreferencesDictionary:(id)arg1;
- (id)preferencesDictionaryForCity:(id)arg1;
- (_Bool)_defaultsCurrent;
- (_Bool)_defaultsAreValid;
- (_Bool)isCelsius;
@property(copy, nonatomic) NSString *yahooWeatherURLString;
- (void)setCelsius:(_Bool)arg1;
- (void)dealloc;
- (_Bool)readTemperatureUnits;
- (void)registerTemperatureUnits;
- (id)init;

@end


@class NSDate, NSMutableArray, NSString, NSTimer;

@interface City : NSObject
{
//    id <CityUpdaterDelegate> _delegate;
    NSString *_updateTimeString;
    NSMutableArray *_dayForecasts;
    NSMutableArray *_hourlyForecasts;
    _Bool _autoUpdate;
    _Bool _isLocalWeatherCity;
    _Bool _isHourlyDataCelsius;
    _Bool _dataCelsius;
    _Bool _isUpdating;
    _Bool _isRequestedByFrameworkClient;
    _Bool _lockedForDemoMode;
    float _longitude;
    float _latitude;
    float _windChill;
    float _windDirection;
    float _windSpeed;
    float _humidity;
    float _visibility;
    float _pressure;
    float _dewPoint;
    float _feelsLike;
    float _heatIndex;
    int _lastUpdateStatus;
    int _updateInterval;
    NSString *_temperature;
    NSDate *_updateTime;
    unsigned long long _conditionCode;
    NSString *_woeid;
    NSString *_name;
    NSString *_locationID;
    NSString *_state;
    unsigned long long _observationTime;
    unsigned long long _sunsetTime;
    unsigned long long _sunriseTime;
    unsigned long long _moonPhase;
    NSString *_link;
    long long _secondsFromGMT;
    unsigned long long _lastUpdateDetail;
    long long _pressureRising;
    NSTimer *_autoUpdateTimer;
}

+ (void)initialize;
+ (id)descriptionForWeatherUpdateDetail:(unsigned long long)arg1;
@property(retain, nonatomic) NSTimer *autoUpdateTimer; // @synthesize autoUpdateTimer=_autoUpdateTimer;
@property(nonatomic) int updateInterval; // @synthesize updateInterval=_updateInterval;
@property(nonatomic) _Bool lockedForDemoMode; // @synthesize lockedForDemoMode=_lockedForDemoMode;
@property(nonatomic) _Bool isRequestedByFrameworkClient; // @synthesize isRequestedByFrameworkClient=_isRequestedByFrameworkClient;
@property(nonatomic) _Bool isUpdating; // @synthesize isUpdating=_isUpdating;
@property(nonatomic) int lastUpdateStatus; // @synthesize lastUpdateStatus=_lastUpdateStatus;
@property(nonatomic) float heatIndex; // @synthesize heatIndex=_heatIndex;
@property(nonatomic) float feelsLike; // @synthesize feelsLike=_feelsLike;
@property(nonatomic) float dewPoint; // @synthesize dewPoint=_dewPoint;
@property(nonatomic) long long pressureRising; // @synthesize pressureRising=_pressureRising;
@property(nonatomic) float pressure; // @synthesize pressure=_pressure;
@property(nonatomic) float visibility; // @synthesize visibility=_visibility;
@property(nonatomic) float humidity; // @synthesize humidity=_humidity;
@property(nonatomic) float windSpeed; // @synthesize windSpeed=_windSpeed;
@property(nonatomic) float windDirection; // @synthesize windDirection=_windDirection;
@property(nonatomic) float windChill; // @synthesize windChill=_windChill;
@property(nonatomic, getter=isDataCelsius) _Bool dataCelsius; // @synthesize dataCelsius=_dataCelsius;
@property(nonatomic) unsigned long long lastUpdateDetail; // @synthesize lastUpdateDetail=_lastUpdateDetail;
@property(nonatomic) _Bool isHourlyDataCelsius; // @synthesize isHourlyDataCelsius=_isHourlyDataCelsius;
@property(nonatomic) long long secondsFromGMT; // @synthesize secondsFromGMT=_secondsFromGMT;
@property(nonatomic) float latitude; // @synthesize latitude=_latitude;
@property(nonatomic) float longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
@property(nonatomic) unsigned long long moonPhase; // @synthesize moonPhase=_moonPhase;
@property(nonatomic) unsigned long long sunriseTime; // @synthesize sunriseTime=_sunriseTime;
@property(nonatomic) unsigned long long sunsetTime; // @synthesize sunsetTime=_sunsetTime;
@property(nonatomic) unsigned long long observationTime; // @synthesize observationTime=_observationTime;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *locationID; // @synthesize locationID=_locationID;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *woeid; // @synthesize woeid=_woeid;
@property(nonatomic) _Bool isLocalWeatherCity; // @synthesize isLocalWeatherCity=_isLocalWeatherCity;
//@property(nonatomic) id <CityUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDate *updateTime; // @synthesize updateTime=_updateTime;
- (void)_generateLocalizableStrings;
- (int)precipitationForecast;
- (id)naturalLanguageDescription;
- (long long)locationOfTime:(long long)arg1;
- (long long)primaryConditionForRange:(struct _NSRange)arg1;
- (id)windDirectionAsString:(double)arg1;
- (_Bool)populateWithDataFromCity:(id)arg1;
@property(nonatomic) unsigned long long conditionCode; // @synthesize conditionCode=_conditionCode;
- (id)cityAndState;
- (id)updateTimeString;
- (_Bool)isUpdatingOrNoData;
- (_Bool)_isUpdating;
- (void)finishedUpdating:(int)arg1 statusDetail:(unsigned long long)arg2;
- (void)addHourlyForecast:(id)arg1;
- (id)hourlyForecasts;
- (void)setHourlyForecasts:(id)arg1;
- (void)addDayForecast:(id)arg1;
- (void)clearForecasts;
- (void)update;
- (void)localWeatherDidBeginUpdate;
- (int)weatherDataAge;
- (_Bool)isDay;
- (long long)timeDigit;
- (id)dayForecasts;
- (void)setDayForecasts:(id)arg1;
@property(copy, nonatomic) NSString *temperature; // @synthesize temperature=_temperature;
- (id)displayName;
- (void)setAutoUpdate:(_Bool)arg1;
- (void)_clearAutoUpdateTimer;
- (void)disassociateWithDelegate:(id)arg1;
- (void)associateWithDelegate:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

@class UIColor, UIImage, UIImageView, UIView, UIView;

@interface SBWallpaperEffectView

- (void)_updateWallpaperAverageColor:(id)fp8;
- (void)wallpaperDidChangeForVariant:(int)fp8;
- (void)wallpaperLegibilitySettingsDidChange:(id)fp8 forVariant:(int)fp12;

@end