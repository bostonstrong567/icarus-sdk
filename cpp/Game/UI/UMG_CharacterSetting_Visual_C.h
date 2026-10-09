// /Game/UI/UMG_CharacterSetting_Visual.UMG_CharacterSetting_Visual_C
// Derives from: UUMG_CharacterSetting_TextBase_C > UUMG_CharacterSetting_Base_C > UUserWidget > UWidget > UVisual > UObject
// size 0x310, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_CharacterSetting_Visual_C : public UUMG_CharacterSetting_TextBase_C
{
public:
    UFUNCTION(BlueprintCallable) void GetSelectionDisplayName(FText& DisplayName);  // parameters 0x18
};
