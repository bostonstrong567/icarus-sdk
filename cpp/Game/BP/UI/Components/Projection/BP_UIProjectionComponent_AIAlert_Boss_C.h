// /Game/BP/UI/Components/Projection/BP_UIProjectionComponent_AIAlert_Boss.BP_UIProjectionComponent_AIAlert_Boss_C
// Derives from: UBP_UIProjectionComponent_AIAlert_C > UBP_UIProjectionComponent_C > UActorComponent > UObject
// size 0x1C0, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_UIProjectionComponent_AIAlert_Boss_C : public UBP_UIProjectionComponent_AIAlert_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x01B8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_UIProjectionComponent_AIAlert_Boss(int32 EntryPoint);  // parameters 0x4
};
