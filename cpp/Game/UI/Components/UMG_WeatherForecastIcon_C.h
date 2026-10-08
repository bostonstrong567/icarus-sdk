// /Game/UI/Components/UMG_WeatherForecastIcon.UMG_WeatherForecastIcon_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x288, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_WeatherForecastIcon_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ForecastIcon;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_WeatherForecast_C* Timeline;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 WeatherTier;  // 0x0278, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UObject* TempImage;  // 0x0280, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_WeatherForecastIcon(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialize(int32 Tier);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnLoaded_CB8AC3624660E4D222EE8F8FA46D155E(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetupIcon();
};
