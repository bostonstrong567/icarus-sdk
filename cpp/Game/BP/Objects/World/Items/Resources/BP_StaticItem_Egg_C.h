// /Game/BP/Objects/World/Items/Resources/BP_StaticItem_Egg.BP_StaticItem_Egg_C
// Derives from: AStaticItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x588, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_StaticItem_Egg_C : public AStaticItem
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0580, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_StaticItem_Egg(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
