// /Game/UI/Components/UMG_WeatherForecastBox.UMG_WeatherForecastBox_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x288, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_WeatherForecastBox_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ForecastBox;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_WeatherForecast_C* Timeline;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 WeatherTier;  // 0x0278, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UObject* TempImage;  // 0x0280, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_WeatherForecastBox(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialize(int32 Tier);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetBoxWidth(int32 NewWidth);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetupBoxColor();
};
