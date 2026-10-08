// /Script/FieldSystemEngine.ToFloatField
// Derives from: UFieldNodeFloat > UFieldNodeBase > UActorComponent > UObject
// size 0xB8, declared in Engine/Source/Runtime/Experimental/FieldSystem/Source/FieldSystemEngine/Public/Field/FieldSystemObjects.h

UCLASS(Config=Engine)
class UToFloatField : public UFieldNodeFloat
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFieldNodeInt* IntField;  // 0x00B0, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure) UToFloatField* SetToFloatField(UFieldNodeInt* IntegerField);  // parameters 0x10
};
