// /Game/BP/Objects/World/Items/Deployables/Wind/BP_Windmill.BP_Windmill_C
// Derives from: ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0xB3B, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Windmill_C : public ABP_ProcessorBase_C, public IBP_WeatherResourceModifierInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0980, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_ProxyMeshComponent_C* BP_ProxyMeshComponent;  // 0x0988, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* ActiveParticle4;  // 0x0990, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* ActiveParticle3;  // 0x0998, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* ActiveParticle2;  // 0x09A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* ActiveParticle1;  // 0x09A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_WindmillGrains1;  // 0x09B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_WindmillGrains;  // 0x09B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Proxy_WetProcess_Black;  // 0x09C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Windmill_Props_Milkcans_Contents2;  // 0x09C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Windmill_Props_Contents6;  // 0x09D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Smoke15;  // 0x09D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Smoke14;  // 0x09E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Proxy_WetProcess_Green;  // 0x09E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Windmill_Props_Milkcans_Contents1;  // 0x09F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Windmill_Props_Contents5;  // 0x09F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Smoke13;  // 0x0A00, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Smoke12;  // 0x0A08, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Windmill_Props_Sacks_Contents3;  // 0x0A10, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Windmill_Props_Contents4;  // 0x0A18, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Smoke11;  // 0x0A20, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Smoke10;  // 0x0A28, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Proxy_DryProcess_Black;  // 0x0A30, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Windmill_Props_Sacks_Contents2;  // 0x0A38, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Windmill_Props_Contents3;  // 0x0A40, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Smoke9;  // 0x0A48, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Smoke8;  // 0x0A50, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Proxy_DryProcess_White;  // 0x0A58, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Windmill_Props_Contents1;  // 0x0A60, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Smoke5;  // 0x0A68, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Smoke4;  // 0x0A70, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Milkcan_Closed5;  // 0x0A78, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Milkcan_Closed4;  // 0x0A80, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Milkcan_Closed2;  // 0x0A88, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Milkcan_Closed1;  // 0x0A90, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Milkcan_Closed;  // 0x0A98, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_PRP_Sack_Vertical1;  // 0x0AA0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Milkcan_Closed7;  // 0x0AA8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_PRP_Sack_Horizontal5;  // 0x0AB0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_PRP_Sack_Horizontal4;  // 0x0AB8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_PRP_Sack_Horizontal2;  // 0x0AC0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_PRP_Sack_Horizontal1;  // 0x0AC8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_PRP_Sack_Horizontal;  // 0x0AD0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_PRP_Sack_Vertical;  // 0x0AD8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Proxy_WetProcess_Orange;  // 0x0AE0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Windmill_Props_Milkcans_Contents;  // 0x0AE8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Smoke3;  // 0x0AF0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Smoke2;  // 0x0AF8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Windmill_Props_Sacks_Contents;  // 0x0B00, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Windmill_Props_Contents;  // 0x0B08, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Windmill_Prop_Blades;  // 0x0B10, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Proxy_DryProcess_Orange;  // 0x0B18, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMODAudioTurbine;  // 0x0B20, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* CollisionZone;  // 0x0B28, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0B30, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool Powered;  // 0x0B38, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool Sheltered;  // 0x0B39, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool Clear;  // 0x0B3A, size 0x1

    UFUNCTION(BlueprintCallable) void ApplyWeatherResourceModifierFunction(int32 Percent, FModifierStatesRowHandle Modifier);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void CheckForPower(bool ForceUpdate);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CheckForPowerHeartbeat();
    UFUNCTION(BlueprintCallable) void ClearWeatherResourceModifier();
    UFUNCTION() void ExecuteUbergraph_BP_Windmill(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetWeatherResourceModifierStrengthAndType(int32 BaseModifierEffectiveness, FModifierStatesRowHandle Modifier, int32& PowerModifierEffectiveness, int32& WaterModifierEffectiveness);  // parameters 0x24
    UFUNCTION(BlueprintCallable) void GetWidgetClass(TSubclassOf<UUserWidget>& Widget);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnHighlighted(UHighlightableComponent* Highlightable, UPrimitiveComponent* Component, bool bHighlighted);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void OnRep_Powered();
    UFUNCTION(BlueprintCallable) void PowerDamageTimer();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void StateUpdated(bool bIsActive);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdatePoweredEffects();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
