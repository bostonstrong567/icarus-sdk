// /Script/Engine.CurveTable
// Derives from: UObject
// size 0xA0, declared in Engine/Source/Runtime/Engine/Classes/Engine/CurveTable.h

UCLASS(MinimalAPI)
class UCurveTable : public UObject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TMap<FName,FRealCurve *,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRealCurve *,0> > RowMap;  // 0x0030, protected
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> OnCurveTableChangedDelegate;  // 0x0080, private
    ECurveTableMode CurveTableMode;  // 0x0098, protected

    // Virtual functions that start here:
    //   EmptyTable
};
