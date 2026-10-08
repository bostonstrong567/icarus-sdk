// /Game/UI/Components/UMG_StatDisplayMount.UMG_StatDisplayMount_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x300, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_StatDisplayMount_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* BasicContainer;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_StatTitle_C* ColdRes;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_StatTitle_C* FallRes;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_StatTitle_C* FireRes;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_StatTitle_C* Health;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_StatTitle_C* HealthRegen;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_StatTitle_C* HeatRes;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_StatTitle_C* MeleeDamage;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_StatTitle_C* MeleeRes;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_StatTitle_C* MovementSpeed;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_StatTitle_C* PoisonRes;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_StatTitle_C* ProjectileRes;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* ResistanceContainer;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_StatTitle_C* SprintSpeed;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_StatTitle_C* Stamina;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_StatTitle_C* StaminaRegen;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_StatTitle_C* WeightCapacity;  // 0x02E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Initialised;  // 0x02F0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool NeedsStatUpdate;  // 0x02F1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* TargetActor;  // 0x02F8, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_StatDisplayMount(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetTargetActor(AActor*& TargetActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetTargetActor(AActor* TargetActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void StatContainerUpdated();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void Update_Movement();  // named "Update Movement"
    UFUNCTION(BlueprintCallable) void Update_Sprint();  // named "Update Sprint"
    UFUNCTION(BlueprintCallable) void UpdateStats();
};
