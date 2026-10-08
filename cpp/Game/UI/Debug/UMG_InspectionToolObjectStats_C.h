// /Game/UI/Debug/UMG_InspectionToolObjectStats.UMG_InspectionToolObjectStats_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x288, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_InspectionToolObjectStats_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Stats;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString StatString;  // 0x0270, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Actor;  // 0x0280, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_InspectionToolObjectStats(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Setup(AActor* Actor);  // parameters 0x8
};
