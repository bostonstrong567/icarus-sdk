// /Game/BP/Objects/World/Resources/Nodes/BP_SW_Bramble_A_Var1.BP_SW_Bramble_A_Var1_C
// Derives from: ABP_ResourceNodeBase_C > AGenericResourceBase > AIcarusActor > AActor > UObject
// size 0x3D8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SW_Bramble_A_Var1_C : public ABP_ResourceNodeBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8

    UFUNCTION() void BndEvt__BP_SW_Bramble_A_Var1_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION() void ExecuteUbergraph_BP_SW_Bramble_A_Var1(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void PlayHarvestFX(FVector Location, AIcarusPlayerCharacter* Instigator);  // parameters 0x18
};
