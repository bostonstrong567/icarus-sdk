// /Game/ThirdPartyAssets/rian_drake/TreeDemo/Blueprints/BP_TreeHUD.BP_TreeHUD_C
// Derives from: AIcarusHUD > AHUD > AActor > UObject
// size 0x440, a blueprint class, blueprint

UCLASS(Transient, NotPlaceable, Config=Game)
class ABP_TreeHUD_C : public AIcarusHUD
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x03C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_ActorPreview_C* PlayerPreview;  // 0x03D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShouldDrawWeather;  // 0x03D8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_TooltipProjectionActor_C* ToolTipActor;  // 0x03E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_CardPreview_C* CardPreview;  // 0x03E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FWeatherBiomeGroupsEnum, FWeatherBiomeGroupForecast> Biome_Group_Forecast;  // 0x03F0, size 0x50, named "Biome Group Forecast"

    UFUNCTION(BlueprintCallable) void ColorFromTier(int32 Tier, FLinearColor& TierColor);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void DrawWeather(int32 SizeX, int32 SizeY);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_TreeHUD(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetEventEndTime(FWeatherEventsRowHandle Event, int32 StartTime, int32& EndTime);  // parameters 0x20
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void ReceiveDrawHUD(int32 SizeX, int32 SizeY);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetBiomeWeatherData(const TMap<FWeatherBiomeGroupsEnum, FWeatherBiomeGroupForecast>& BiomeGroupForecast);  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void ToggleDrawWeather();
};
