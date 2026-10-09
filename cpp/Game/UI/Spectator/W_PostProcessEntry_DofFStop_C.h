// /Game/UI/Spectator/W_PostProcessEntry_DofFStop.W_PostProcessEntry_DofFStop_C
// Derives from: UW_PostProcessEntry_Slider_C > UW_PostProcessEntry_C > UUserWidget > UWidget > UVisual > UObject
// size 0x31C, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UW_PostProcessEntry_DofFStop_C : public UW_PostProcessEntry_Slider_C
{
public:
    UFUNCTION(BlueprintCallable) void UpdatePostProcess(FPostProcessSettings& Settings);  // parameters 0x560
};
