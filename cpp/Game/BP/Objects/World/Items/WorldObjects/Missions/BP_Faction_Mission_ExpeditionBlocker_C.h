// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Faction_Mission_ExpeditionBlocker.BP_Faction_Mission_ExpeditionBlocker_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x498, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Faction_Mission_ExpeditionBlocker_C : public ABP_WorldObject_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Sandworm_Emerge_FX1;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Sandworm_GroundImpactLarge_FX;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Sandworm_GroundImpact_FX;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Sandworm_Emerge_FX;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNavModifierComponent* NavModifier;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusNavigationDirtier* IcarusNavigationDirtier;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* e;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_MED_012;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_LRG_014;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_MED_011;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_LRG_013;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_MED_010;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_MED_09;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_LRG_012;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_CanyonWall_07A1;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_LRG_011;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_LRG_010;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_LRG_09;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_LRG_08;  // 0x03B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_MED_08;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_MED_07;  // 0x03C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_MED_06;  // 0x03D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_LRG_07;  // 0x03D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_CanyonWall_04A1;  // 0x03E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* w;  // 0x03E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_MED_05;  // 0x03F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_CanyonWall_04A;  // 0x03F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_CanyonWall_06A1;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_LRG_04;  // 0x0408, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_LRG_06;  // 0x0410, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_LRG_05;  // 0x0418, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_LRG_03;  // 0x0420, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_MED_04;  // 0x0428, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_MED_03;  // 0x0430, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_Cliff_07;  // 0x0438, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_Cliff_08;  // 0x0440, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_CanyonWall_07A;  // 0x0448, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_CanyonWall_06A;  // 0x0450, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh;  // 0x0458, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_Niagara;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDestructibleComponent* Destructible;  // 0x0470, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Blocker;  // 0x0478, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Faction_Cave_Blocker_Destroy;  // 0x0480, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FBlockerRemoved BlockerRemoved;  // 0x0488, size 0x10

    UFUNCTION(BlueprintCallable) void BlockerRemoved__DelegateSignature();
    UFUNCTION() void ExecuteUbergraph_BP_Faction_Mission_ExpeditionBlocker(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsCleared();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnBlendOut_E72482E9422CD29C317A2AA0D33B227E(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_E72482E9422CD29C317A2AA0D33B227E(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnInterrupted_E72482E9422CD29C317A2AA0D33B227E(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_E72482E9422CD29C317A2AA0D33B227E(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_E72482E9422CD29C317A2AA0D33B227E(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnStatContainerUpdated();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void TriggerDestroy();
};
