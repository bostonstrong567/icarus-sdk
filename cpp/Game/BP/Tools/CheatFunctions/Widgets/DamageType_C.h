// /Game/BP/Tools/CheatFunctions/Widgets/DamageType.DamageType_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x271, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UDamageType_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EIcarusDamageType DamageType;  // 0x0270, size 0x1

    UFUNCTION() void ExecuteUbergraph_DamageType(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetDamageType(EIcarusDamageType NewDamageType);  // parameters 0x1
};
