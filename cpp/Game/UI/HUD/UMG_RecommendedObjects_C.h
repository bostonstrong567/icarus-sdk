// /Game/UI/HUD/UMG_RecommendedObjects.UMG_RecommendedObjects_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2D0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_RecommendedObjects_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ActiveMounts;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ActivePipes_1;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ActiveWires_1;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* BuildingPieces;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* BuildingProgress;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* DeployableProgress;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Deployables;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* MountProgress;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* PipeBox_1;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* PipeProgress_1;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* WireBox_1;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* WireProgress_1;  // 0x02C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 PipeCount;  // 0x02C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 WireCount;  // 0x02CC, size 0x4

    UFUNCTION() void ExecuteUbergraph_UMG_RecommendedObjects(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetProgressBarColor(float Percent, FLinearColor& NewParam);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void OnWidgetUpdated();
};
