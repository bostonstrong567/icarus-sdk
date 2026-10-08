// /Game/UI/Components/UMG_AnnouncementPanel.UMG_AnnouncementPanel_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x288, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_AnnouncementPanel_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* AnnounceDate;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* AnnouncementBGImage;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* AnnounceSubtitle;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* AnnounceText;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* AnnounceTitle;  // 0x0280, size 0x8
};
