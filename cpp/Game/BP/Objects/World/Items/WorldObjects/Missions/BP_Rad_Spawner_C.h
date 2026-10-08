// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Rad_Spawner.BP_Rad_Spawner_C
// Derives from: ABP_Faction_Mission_Spawner_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x581, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Rad_Spawner_C : public ABP_Faction_Mission_Spawner_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0488, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0490, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMODAudio;  // 0x0498, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_RCK_LC_AlienRock_07_Crystal;  // 0x04A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_RCK_LC_AlienRock_07;  // 0x04A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_RCK_LC_AlienRock_01_Crystal;  // 0x04B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_RCK_LC_AlienRock_01;  // 0x04B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_RCK_LC_AlienRock_02_Crystal;  // 0x04C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_RCK_LC_AlienRock_02;  // 0x04C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_RCK_LC_AlienTunnel_EntranceRing;  // 0x04D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Sandworm_Egg3;  // 0x04D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Sandworm_Egg2;  // 0x04E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Sandworm_Egg1;  // 0x04E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Sandworm_Egg;  // 0x04F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_MetaExotic_Uranium_Node_08;  // 0x04F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_MetaExotic_Uranium_Node_06;  // 0x0500, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_MetaExotic_Uranium_Node_05;  // 0x0508, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_MetaExotic_Uranium_Node_03;  // 0x0510, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_MetaExotic_Uranium_Node_02;  // 0x0518, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Radboss_CliffWebbing_06;  // 0x0520, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Radboss_CliffWebbing_05;  // 0x0528, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_CRE_Bat_Nest_Radioactive1;  // 0x0530, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_CRE_Bat_Nest_Radioactive;  // 0x0538, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_RCK_LC_AlienRock_04_Crystal;  // 0x0540, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_RCK_LC_AlienRock_04;  // 0x0548, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Meta_Uranium;  // 0x0550, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_GH_Rad_Spawner_Webbing;  // 0x0558, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_RCK_LC_AlienRock_03_Crystal;  // 0x0560, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_RCK_LC_AlienRock_03;  // 0x0568, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ObjectMesh3;  // 0x0570, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_LC_Ledge_02;  // 0x0578, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bTransientSpawner;  // 0x0580, size 0x1

    UFUNCTION(BlueprintCallable) void AttemptSpawn();
    UFUNCTION(BlueprintCallable) void DestroyUpdate();
    UFUNCTION(BlueprintCallable) void DoStartDelayedClean();
    UFUNCTION() void ExecuteUbergraph_BP_Rad_Spawner(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetAIToSpawn(FAISetupRowHandle& AI);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void GetRadiationAuraSize(float& FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetAsWorldSpawner();
};
