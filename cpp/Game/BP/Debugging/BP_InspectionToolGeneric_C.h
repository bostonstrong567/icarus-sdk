// /Game/BP/Debugging/BP_InspectionToolGeneric.BP_InspectionToolGeneric_C
// Derives from: AActor > UObject
// size 0x2D8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_InspectionToolGeneric_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Sphere;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetComponent* Widget;  // 0x0230, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0238, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HoldTrace;  // 0x0240, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FHitResult HitResult;  // 0x0244, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EDevToolMode> Mode;  // 0x02CC, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_InspectionToolPopup_C* CachedWidget;  // 0x02D0, size 0x8

    UFUNCTION(BlueprintCallable) void DisplayWidget();
    UFUNCTION() void ExecuteUbergraph_BP_InspectionToolGeneric(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Kill();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
