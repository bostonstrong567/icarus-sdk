// /Script/Engine.CollectionParameterBase
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialParameterCollection.h

USTRUCT()
struct FCollectionParameterBase
{
public:
    UPROPERTY(EditAnywhere) FName ParameterName;  // 0x0000, size 0x8
    UPROPERTY() FGuid Id;  // 0x0008, size 0x10
};
