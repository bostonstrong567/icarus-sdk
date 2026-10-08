// /Game/Developers/francisliardet/Blueprints/BP_RockGolem_BarrierWall.BP_RockGolem_BarrierWall_C
// Derives from: AIcarusActor > AActor > UObject
// size 0x2E8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_RockGolem_BarrierWall_C : public AIcarusActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* InvisibleBlocker;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBillboardComponent* TargetLocation;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* RockWallMesh;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x02E0, size 0x8

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void DestroyBlockerAudio();
    UFUNCTION() void ExecuteUbergraph_BP_RockGolem_BarrierWall(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnWallDestroyed(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
