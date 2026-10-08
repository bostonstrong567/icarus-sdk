// /Game/BP/Systems/WorldBoss/BP_WorldBossSpawner_Scorpion.BP_WorldBossSpawner_Scorpion_C
// Derives from: ABP_WorldBossSpawner_C > AWorldBossSpawner > AIcarusActor > AActor > UObject
// size 0x520, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_WorldBossSpawner_Scorpion_C : public ABP_WorldBossSpawner_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* NavPoint_05;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* NavPoint_04;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* NavPoint_03;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* NavPoint_02;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* NavPoint_01;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* ValidNavigationPoints;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_AC_GlacialCliff_08;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_AC_GlacialCliff_07;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_AC_GlacialCliff_06;  // 0x03B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_AC_GlacialCliff_05;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_AC_GlacialCliff_04;  // 0x03C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_AC_GlacialCliff_03;  // 0x03D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_AC_GlacialCliff_02;  // 0x03D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_AC_GlacialCliff_01;  // 0x03E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_MED_RiverCliff_014;  // 0x03E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_LRG_RiverCliff_011;  // 0x03F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_LRG_RiverCliff_010;  // 0x03F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_LRG_RiverCliff_09;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_MED_RiverCliff_013;  // 0x0408, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_MED_RiverCliff_012;  // 0x0410, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_MED_RiverCliff_011;  // 0x0418, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_MED_RiverCliff_01;  // 0x0420, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_LRG_RiverCliff_07;  // 0x0428, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_LRG_RiverCliff_06;  // 0x0430, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_MED_RiverCliff_09;  // 0x0438, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_MED_RiverCliff_08;  // 0x0440, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_LRG_RiverCliff_08;  // 0x0448, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_LRG_RiverCliff_04;  // 0x0450, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_LRG_RiverCliff_03;  // 0x0458, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_LRG_RiverCliff_01;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_LRG_RiverCliff_02;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_MED_RiverCliff_07;  // 0x0470, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_MED_RiverCliff_06;  // 0x0478, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_MED_RiverCliff_05;  // 0x0480, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_MED_RiverCliff_04;  // 0x0488, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_MED_RiverCliff_010;  // 0x0490, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_MED_RiverCliff_03;  // 0x0498, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_MED_RiverCliff_02;  // 0x04A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_LRG_RiverCliff_05;  // 0x04A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* AC_Rocks;  // 0x04B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DC_Rocks;  // 0x04B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_SandDrift8;  // 0x04C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_SandDrift7;  // 0x04C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_SandDrift6;  // 0x04D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_SandDrift5;  // 0x04D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_SandDrift4;  // 0x04E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_SandDrift2;  // 0x04E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_SandDrift1;  // 0x04F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_SandDrift3;  // 0x04F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* BossSpawn;  // 0x0500, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DC_ScorpionArena;  // 0x0508, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Root;  // 0x0510, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusNavigationDirtier* IcarusNavigationDirtier;  // 0x0518, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_WorldBossSpawner_Scorpion(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void IsNavigationValid(bool& IsValid) const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnPostDirtyNavmesh_Event();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SwitchRocksWithBiome();
};
