// /Game/ASS/VFX/WAT/BP_waterfallBase_Frozen.BP_waterfallBase_Frozen_C
// Derives from: AActor > UObject
// size 0x239, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_waterfallBase_Frozen_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Plane;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_waterfallBaseFX;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool BlockerEnabled;  // 0x0238, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_waterfallBase_Frozen(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
