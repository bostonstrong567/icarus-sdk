// /Game/BP/Tools/CheatFunctions/Widgets/DebugProspectRow.DebugProspectRow_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x278, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UDebugProspectRow_C : public UUserWidget
{
public:
    UPROPERTY(Instanced) UTextBlock* TextBlock_56;  // 0x0260, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString ProspectFileName;  // 0x0268, size 0x10
};
