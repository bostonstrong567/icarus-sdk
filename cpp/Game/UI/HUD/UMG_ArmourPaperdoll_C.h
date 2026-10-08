// /Game/UI/HUD/UMG_ArmourPaperdoll.UMG_ArmourPaperdoll_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x330, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ArmourPaperdoll_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* MainOverlay;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* RadiationBarrier;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ArmourHealth_C* UMG_ArmourHealth_ArmL;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ArmourHealth_C* UMG_ArmourHealth_ArmR;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ArmourHealth_C* UMG_ArmourHealth_Chest;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ArmourHealth_C* UMG_ArmourHealth_Feet;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ArmourHealth_C* UMG_ArmourHealth_Helmet;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ArmourHealth_C* UMG_ArmourHealth_Legs;  // 0x02A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<E_ArmourHealth> EArmourHealth;  // 0x02A8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor HealthyOpacity;  // 0x02B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor DamagedOpacity;  // 0x02D8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor BrokenOpacity;  // 0x0300, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DamgedArmourThreshold;  // 0x0328, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RadResist;  // 0x032C, size 0x4

    UFUNCTION() void ExecuteUbergraph_UMG_ArmourPaperdoll(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetPaperdollStyle(UInventory* EquipmentInventory);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateElement(int32 Slot, float Durability);  // parameters 0x8
};
