// /Script/FieldSystemEngine.FieldSystemActor
// Derives from: AActor > UObject
// size 0x228, declared in Engine/Source/Runtime/Experimental/FieldSystem/Source/FieldSystemEngine/Public/Field/FieldSystemActor.h

UCLASS(Config=Engine)
class AFieldSystemActor : public AActor
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UFieldSystemComponent* FieldSystemComponent;  // 0x0220, size 0x8
};
