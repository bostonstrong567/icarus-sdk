// /Script/Engine.SmartNameMapping
// size 0x70, declared in Engine/Source/Runtime/Engine/Classes/Animation/SmartName.h

USTRUCT()
struct FSmartNameMapping
{

    // Not reflected:
    TArray<FName,TSizedDefaultAllocator<32> > CurveNameList;  // 0x0000
    TArray<FCurveMetaData,TSizedDefaultAllocator<32> > CurveMetaDataList;  // 0x0010
    TMap<FName,FCurveMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0> > CurveMetaDataMap;  // 0x0020
};
