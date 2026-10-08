// /Game/UI/Components/UMG_StatDisplay.UMG_StatDisplay_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x328, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_StatDisplay_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* BasicContainer;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_StatTitle_C* ColdRes;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_StatTitle_C* CollisionRes;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_StatTitle_C* Critical;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_StatTitle_C* ExplosiveRes;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_StatTitle_C* ExposureRes;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_StatTitle_C* Health;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_StatTitle_C* HealthRegen;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_StatTitle_C* HeatRes;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_StatTitle_C* Melee;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_StatTitle_C* MeleeRes;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_StatTitle_C* MovementSpeed;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_StatTitle_C* ProjectileRes;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_StatTitle_C* RadiationRes;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_StatTitle_C* Ranged;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* ResistanceContainer;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_StatTitle_C* Stamina;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_StatTitle_C* StaminaRegen;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_StatTitle_C* Stealth;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* WeaponContainer;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_StatTitle_C* WeightCapacity;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_StatTitle_C* XPBonus;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Initialised;  // 0x0318, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool NeedsStatUpdate;  // 0x0319, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* TargetActor;  // 0x0320, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_StatDisplay(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetTargetActor(AActor*& TargetActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetTargetActor(AActor* TargetActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void StatContainerUpdated();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateRangeStats();
    UFUNCTION(BlueprintCallable) void UpdateStats();
};
