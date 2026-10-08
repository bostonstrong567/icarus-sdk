// /Game/UI/Debug/UMG_EnvAudioDebugRow.UMG_EnvAudioDebugRow_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x280, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_EnvAudioDebugRow_C : public UUserWidget
{
public:
    UPROPERTY(Instanced) UTextBlock* TextBlock;  // 0x0260, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Text;  // 0x0268, size 0x18
};
