// /Script/FieldSystemEngine.ToIntegerField
// Derives from: UFieldNodeInt > UFieldNodeBase > UActorComponent > UObject
// size 0xB8, declared in Engine/Source/Runtime/Experimental/FieldSystem/Source/FieldSystemEngine/Public/Field/FieldSystemObjects.h

UCLASS(Config=Engine)
class UToIntegerField : public UFieldNodeInt
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFieldNodeFloat* FloatField;  // 0x00B0, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure) UToIntegerField* SetToIntegerField(UFieldNodeFloat* FloatField);  // parameters 0x10
};
