// /Game/UI/Components/UMG_StatList.UMG_StatList_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x28A, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_StatList_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Stats;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* TargetOverride;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HideZeroStats;  // 0x0278, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasNonZeroStats;  // 0x0279, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_StatTitleCategory_C* LastStatCategory;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HideLastStatCategory;  // 0x0288, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasAddedNonZeroStatSinceLastCategory;  // 0x0289, size 0x1

    UFUNCTION(BlueprintCallable) bool AddElement(UUserWidget* UserWidget);  // parameters 0x9
    UFUNCTION() void ExecuteUbergraph_UMG_StatList(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Update();
};
