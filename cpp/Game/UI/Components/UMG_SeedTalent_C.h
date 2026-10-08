// /Game/UI/Components/UMG_SeedTalent.UMG_SeedTalent_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x268, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_SeedTalent_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ModifierDescription_C* UMG_ModifierDescription;  // 0x0260, size 0x8
};
