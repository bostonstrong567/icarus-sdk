// /Game/UI/InWorld/UMG_FishScoreEntry.UMG_FishScoreEntry_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2B9, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FishScoreEntry_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Fish;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Name;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Value;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) FFishBoardRecord Record;  // 0x0280, size 0x38
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Weight;  // 0x02B8, size 0x1

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_FishScoreEntry(int32 EntryPoint);  // parameters 0x4
};
