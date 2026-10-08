// /Game/UI/Spectator/W_PostProcessEntry_ToggleProjection.W_PostProcessEntry_ToggleProjection_C
// Derives from: UW_PostProcessEntry_Checkbox_C > UW_PostProcessEntry_C > UUserWidget > UWidget > UVisual > UObject
// size 0x2D1, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UW_PostProcessEntry_ToggleProjection_C : public UW_PostProcessEntry_Checkbox_C
{
public:

    UFUNCTION(BlueprintCallable) void UpdatePostProcess(FPostProcessSettings& Settings);  // parameters 0x560
};
