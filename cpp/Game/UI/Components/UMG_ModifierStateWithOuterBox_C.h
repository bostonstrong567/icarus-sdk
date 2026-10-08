// /Game/UI/Components/UMG_ModifierStateWithOuterBox.UMG_ModifierStateWithOuterBox_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x268, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ModifierStateWithOuterBox_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ModifierState_C* UMG_ModifierState;  // 0x0260, size 0x8
};
