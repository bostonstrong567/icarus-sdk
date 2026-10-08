// /Game/BP/Objects/World/Resources/Trees/BP_FLODTreeComponent.BP_FLODTreeComponent_C
// Derives from: UFLODActorComponent > UActorComponent > UObject
// size 0x138, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_FLODTreeComponent_C : public UFLODActorComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0128, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ATreeBase* OwnerTree;  // 0x0130, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ConcealingImpl();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_FLODTreeComponent(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool RevealImpl(const FTransform& Transform);  // parameters 0x31
};
