// /Script/CoreUObject.MetaData
// Derives from: UObject
// size 0xC8, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/MetaData.h

UCLASS()
class UMetaData : public UObject
{
public:
    TMap<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0> >,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0> >,0> > ObjectMetaDataMap;  // 0x0028, not reflected
    TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0> > RootMetaDataMap;  // 0x0078, not reflected
};
