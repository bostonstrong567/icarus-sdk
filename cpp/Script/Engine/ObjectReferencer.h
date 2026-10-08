// /Script/Engine.ObjectReferencer
// Derives from: UObject
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Engine/ObjectReferencer.h

UCLASS()
class UObjectReferencer : public UObject
{
public:
    UPROPERTY(EditAnywhere) TArray<UObject*> ReferencedObjects;  // 0x0028, size 0x10
};
