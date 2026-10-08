// /Script/FieldSystemEngine.OperatorField
// Derives from: UFieldNodeBase > UActorComponent > UObject
// size 0xD0, declared in Engine/Source/Runtime/Experimental/FieldSystem/Source/FieldSystemEngine/Public/Field/FieldSystemObjects.h

UCLASS(Config=Engine)
class UOperatorField : public UFieldNodeBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Magnitude;  // 0x00B0, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFieldNodeBase* RightField;  // 0x00B8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFieldNodeBase* LeftField;  // 0x00C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EFieldOperationType> Operation;  // 0x00C8, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintPure) UOperatorField* SetOperatorField(float Magnitude, UFieldNodeBase* LeftField, UFieldNodeBase* RightField, TEnumAsByte<EFieldOperationType> Operation);  // parameters 0x28
};
