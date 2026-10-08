// /Game/BP/Objects/World/Items/WorldObjects/Missions/ELY_SQ/BP_SQ_Private_Firing.BP_SQ_Private_Firing_C
// Derives from: ABP_Mission_NPC_Base_C > AIcarusNPCMissionCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0x873, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_SQ_Private_Firing_C : public ABP_Mission_NPC_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x07D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* GunStowed;  // 0x07E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh8;  // 0x07E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh7;  // 0x07F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh6;  // 0x07F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh5;  // 0x0800, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x0808, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh4;  // 0x0810, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Gun_Firing;  // 0x0818, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh3;  // 0x0820, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh2;  // 0x0828, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh1;  // 0x0830, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0838, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Armour_Head;  // 0x0840, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Armour_Legs;  // 0x0848, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Armour_Arms;  // 0x0850, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh;  // 0x0858, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Armour_Feet;  // 0x0860, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Armour_Chest;  // 0x0868, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) bool bFiring;  // 0x0870, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool bShot;  // 0x0871, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bReady;  // 0x0872, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_SQ_Private_Firing(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FireShot();
    UFUNCTION(BlueprintCallable, NetMulticast) void Multi_Fire();
    UFUNCTION(BlueprintCallable) void OnRep_bFiring();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SpawnFlare();
    UFUNCTION(BlueprintCallable) void UpdatingFiringState();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
