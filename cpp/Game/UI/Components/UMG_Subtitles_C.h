// /Game/UI/Components/UMG_Subtitles.UMG_Subtitles_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x278, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Subtitles_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* DropShadowRetainer;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* PersonName;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* SubtitleText;  // 0x0270, size 0x8
};
