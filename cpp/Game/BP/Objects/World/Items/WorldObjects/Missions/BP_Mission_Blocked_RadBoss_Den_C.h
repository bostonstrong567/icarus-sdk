// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Mission_Blocked_RadBoss_Den.BP_Mission_Blocked_RadBoss_Den_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x5B0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_Blocked_RadBoss_Den_C : public ABP_WorldObject_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Blocker;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_CAVE_LC_Entrance_SML_03;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Sandworm_Egg9;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Sandworm_Egg8;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Sandworm_Egg7;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Sandworm_Egg6;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Sandworm_Egg5;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Sandworm_Egg4;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Sandworm_Egg3;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Sandworm_Egg2;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Sandworm_Egg1;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Sandworm_Egg;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Radboss_HangingWebbing_04;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Radboss_CliffWebbing_034;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Radboss_CliffWebbing_033;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Radboss_CliffWebbing_032;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Radboss_CliffWebbing_031;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Radboss_CliffWebbing_030;  // 0x03B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Radboss_CliffWebbing_029;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Radboss_CliffWebbing_028;  // 0x03C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Radboss_CliffWebbing_027;  // 0x03D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Radboss_CliffWebbing_026;  // 0x03D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Radboss_CliffWebbing_025;  // 0x03E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_CRE_Bat_Nest_Radioactive7;  // 0x03E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_CRE_Bat_Nest_Radioactive6;  // 0x03F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_RCK_LC_AlienRock_03_Crystal1;  // 0x03F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_RCK_LC_AlienRock_05;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Radboss_CliffWebbing_024;  // 0x0408, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Radboss_CliffWebbing_023;  // 0x0410, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Radboss_CliffWebbing_022;  // 0x0418, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Radboss_CliffWebbing_019;  // 0x0420, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Radboss_CliffWebbing_021;  // 0x0428, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Radboss_CliffWebbing_020;  // 0x0430, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Radboss_CliffWebbing_018;  // 0x0438, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Radboss_CliffWebbing_017;  // 0x0440, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Radboss_CliffWebbing_016;  // 0x0448, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Radboss_CliffWebbing_015;  // 0x0450, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Radboss_CliffWebbing_014;  // 0x0458, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_CRE_Bat_Nest_Radioactive5;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_CRE_Bat_Nest_Radioactive4;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_CRE_Bat_Nest_Radioactive3;  // 0x0470, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_CRE_Bat_Nest_Radioactive2;  // 0x0478, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Radboss_CliffWebbing_013;  // 0x0480, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Radboss_CliffWebbing_012;  // 0x0488, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Radboss_CliffWebbing_011;  // 0x0490, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Radboss_CliffWebbing_08;  // 0x0498, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Radboss_CliffWebbing_06;  // 0x04A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Radboss_HangingWebbing_03;  // 0x04A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Radboss_CliffWebbing_05;  // 0x04B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Radboss_HangingWebbing_02;  // 0x04B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Radboss_CliffWebbing_010;  // 0x04C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Radboss_CliffWebbing_09;  // 0x04C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Radboss_CliffWebbing_07;  // 0x04D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Radboss_CliffWebbing_04;  // 0x04D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_CRE_Bat_Nest_Radioactive1;  // 0x04E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Radboss_CliffWebbing_03;  // 0x04E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Radboss_CliffWebbing_02;  // 0x04F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_CRE_Bat_Nest_Radioactive;  // 0x04F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_LC_Ledge_08;  // 0x0500, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_LC_Ledge_07;  // 0x0508, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_LC_Ledge_06;  // 0x0510, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_LC_Ledge_05;  // 0x0518, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_RCK_LC_AlienRock_03_Crystal;  // 0x0520, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_RCK_LC_AlienRock_03;  // 0x0528, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_LC_LRG_RiverCliff_01;  // 0x0530, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_RCK_LC_AlienRock_04_Crystal;  // 0x0538, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_RCK_LC_AlienRock_04;  // 0x0540, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_RCK_LC_AlienRock_02;  // 0x0548, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_RCK_LC_AlienRock_01;  // 0x0550, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_LC_Ledge_04;  // 0x0558, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_LC_Ledge_03;  // 0x0560, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_LC_Cliff_14;  // 0x0568, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_LC_Cliff_28;  // 0x0570, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_LC_Cliff_18;  // 0x0578, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_LC_Cliff_17;  // 0x0580, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_LC_Ledge_02;  // 0x0588, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_LC_Ledge_01;  // 0x0590, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* EntranceMeshes;  // 0x0598, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) bool bOpen;  // 0x05A0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* Event;  // 0x05A8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Mission_Blocked_RadBoss_Den(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, NetMulticast) void Explode();
    UFUNCTION(BlueprintCallable) void OnInteract();
    UFUNCTION(BlueprintCallable) void OnRep_bOpen();
    UFUNCTION(BlueprintCallable) void OpenBlocker();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TransitionToHarvested();
    UFUNCTION(BlueprintCallable) void WorldObject_Interact(AActor* Instigator);  // parameters 0x8
};
