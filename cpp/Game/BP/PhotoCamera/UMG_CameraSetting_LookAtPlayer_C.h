// /Game/BP/PhotoCamera/UMG_CameraSetting_LookAtPlayer.UMG_CameraSetting_LookAtPlayer_C
// Derives from: UW_PostProcessEntry_Checkbox_C > UW_PostProcessEntry_C > UUserWidget > UWidget > UVisual > UObject
// size 0x2D1, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_CameraSetting_LookAtPlayer_C : public UW_PostProcessEntry_Checkbox_C
{
public:

    UFUNCTION(BlueprintCallable) void UpdatePostProcess(FPostProcessSettings& Settings);  // parameters 0x560
};
