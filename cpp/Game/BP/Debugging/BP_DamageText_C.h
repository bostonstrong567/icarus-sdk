// /Game/BP/Debugging/BP_DamageText.BP_DamageText_C
// Derives from: AActor > UObject
// size 0x250, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_DamageText_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionComponent_C* BP_UIProjectionComponent;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Sphere;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EIcarusDamageType Damage;  // 0x0238, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Value;  // 0x023C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCriticalHitAreasEnum CriticalHit;  // 0x0240, size 0x10

    UFUNCTION() void ExecuteUbergraph_BP_DamageText(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
