// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Ape_Spawner_Desert.BP_Ape_Spawner_Desert_C
// Derives from: ABP_Ape_Spawner_C > ABP_Faction_Mission_Spawner_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x668, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Ape_Spawner_Desert_C : public ABP_Ape_Spawner_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0620, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_CRE_Icebreaker_Bones_A;  // 0x0628, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_CRE_Icebreaker_Bones_F2;  // 0x0630, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_CRE_Icebreaker_Bones_F1;  // 0x0638, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_CRE_Icebreaker_Bones_D1;  // 0x0640, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_CRE_Icebreaker_Bones_I;  // 0x0648, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_CRE_Icebreaker_Bones_F;  // 0x0650, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_CRE_Icebreaker_Bones_D;  // 0x0658, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_CRE_Icebreaker_Bones_C;  // 0x0660, size 0x8

    UFUNCTION(BlueprintCallable) void DestroyRocks();
    UFUNCTION() void ExecuteUbergraph_BP_Ape_Spawner_Desert(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
