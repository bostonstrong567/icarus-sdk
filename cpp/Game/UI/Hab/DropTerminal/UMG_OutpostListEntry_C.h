// /Game/UI/Hab/DropTerminal/UMG_OutpostListEntry.UMG_OutpostListEntry_C
// Derives from: UUMG_BasicButton_2_C > UUMG_ButtonBase_C > UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x7B8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_OutpostListEntry_C : public UUMG_BasicButton_2_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString ExistingOutpostPath;  // 0x07A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EMissionDifficulty ExistingOutpostDifficulty;  // 0x07B0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ExistingOutpostDropIndex;  // 0x07B4, size 0x4
};
