// /Script/Engine.SmartNameMapping
// size 0x70, declared in Engine/Source/Runtime/Engine/Classes/Animation/SmartName.h

USTRUCT()
struct FSmartNameMapping
{
private:
    TArray<FName,TSizedDefaultAllocator<32> > CurveNameList;  // 0x0000, not reflected
    TArray<FCurveMetaData,TSizedDefaultAllocator<32> > CurveMetaDataList;  // 0x0010, not reflected
    TMap<FName,FCurveMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0> > CurveMetaDataMap;  // 0x0020, not reflected
};
