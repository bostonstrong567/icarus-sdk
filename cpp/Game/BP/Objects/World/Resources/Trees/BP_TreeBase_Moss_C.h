// /Game/BP/Objects/World/Resources/Trees/BP_TreeBase_Moss.BP_TreeBase_Moss_C
// Derives from: ABP_TreeBase_C > ATreeBase > AIcarusActor > AActor > UObject
// size 0x890, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_TreeBase_Moss_C : public ABP_TreeBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0880, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UNiagaraComponent* NiagaraRef;  // 0x0888, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_TreeBase_Moss(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_TreePrimitiveDetached(FVector DetachedPrimitiveOffset, ETreePrimitiveType DetachedPrimitiveType, float DetachedPrimitiveMass, FTreePrimitiveDetachContext DetachContext, bool ShouldPlaySFX, FName DetachPrimitiveName);  // parameters 0x3C
};
