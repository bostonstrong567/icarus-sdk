// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Rock_Golem_Spawner.BP_Rock_Golem_Spawner_C
// Derives from: ABP_Faction_Mission_Spawner_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x588, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Rock_Golem_Spawner_C : public ABP_Faction_Mission_Spawner_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0488, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* ActiveAudioLoop;  // 0x0490, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ObjectMesh4;  // 0x0498, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_LC_Ledge_02;  // 0x04A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_LC_MED_011;  // 0x04A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_LC_MED_010;  // 0x04B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_LC_MED_09;  // 0x04B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_LC_MED_08;  // 0x04C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_LC_MED_07;  // 0x04C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_LC_MED_06;  // 0x04D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_LC_SML_016;  // 0x04D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_LC_SML_015;  // 0x04E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_LC_SML_014;  // 0x04E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_LC_SML_013;  // 0x04F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_LC_SML_012;  // 0x04F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_LC_SML_011;  // 0x0500, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_LC_SML_010;  // 0x0508, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_LC_SML_09;  // 0x0510, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_LC_SML_08;  // 0x0518, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_LC_SML_07;  // 0x0520, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_LC_SML_06;  // 0x0528, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_LC_SML_05;  // 0x0530, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_LC_SML_04;  // 0x0538, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_LC_SML_03;  // 0x0540, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_GolemSpawner_Hole;  // 0x0548, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0550, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* BlockedMesh;  // 0x0558, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* Box;  // 0x0560, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UParticleSystemComponent* ParticleSystem;  // 0x0568, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ObjectMesh3;  // 0x0570, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ObjectMesh2;  // 0x0578, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ObjectMesh1;  // 0x0580, size 0x8

    UFUNCTION(BlueprintCallable) void CustomEvent_0(UHighlightableComponent* Highlightable, UPrimitiveComponent* Component, bool bHighlighted);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void DestroyUpdate();
    UFUNCTION() void ExecuteUbergraph_BP_Rock_Golem_Spawner(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnCreatureSpawned(AActor* Creature);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void TriggerParticle();
};
