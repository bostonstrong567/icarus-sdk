// /Script/FieldSystemEngine.CullingField
// Derives from: UFieldNodeBase > UActorComponent > UObject
// size 0xC8, declared in Engine/Source/Runtime/Experimental/FieldSystem/Source/FieldSystemEngine/Public/Field/FieldSystemObjects.h

UCLASS(Config=Engine)
class UCullingField : public UFieldNodeBase
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFieldNodeBase* Culling;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFieldNodeBase* Field;  // 0x00B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EFieldCullingOperationType> Operation;  // 0x00C0, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintPure) UCullingField* SetCullingField(UFieldNodeBase* Culling, UFieldNodeBase* Field, TEnumAsByte<EFieldCullingOperationType> Operation);  // parameters 0x20
};
