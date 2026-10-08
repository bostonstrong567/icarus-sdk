// /Game/BP/Systems/TitleScreen/UMG_TitleScreenInterface.UMG_TitleScreenInterface_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x270, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_TitleScreenInterface_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* MigrationContainer;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* MigrationStatusText;  // 0x0268, size 0x8
};
