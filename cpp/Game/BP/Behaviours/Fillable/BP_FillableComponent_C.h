// /Game/BP/Behaviours/Fillable/BP_FillableComponent.BP_FillableComponent_C
// Derives from: UFillableComponent > UTraitComponent > UActorComponent > UObject
// size 0xE8, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UBP_FillableComponent_C : public UFillableComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00E0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_FillableComponent(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
