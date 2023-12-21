#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
216,
224,
225,
226,
227,
228,
229,
230,
231,
232,
235,
236,
409,
410,
412,
440,
441,
442,
462,
463,
464,
465,
563,
564,
565,
568,
605,
606,
607,
610,
612,
614,
616,
621,
629,
630,
631,
632,
633,
634,
635,
636,
637,
638,
639,
640,
641,
642,
643,
644,
645,
647,
648,
649,
650,
651,
652,
653,
746,
747,
748,
749,
750,
751,
752,
753,
754,
755,
756,
757,
758,
759,
760,
761,
762,
764,
765,
766,
767,
768,
769,
770,
896,
905,
908,
910,
915,
916,
918,
919,
923,
924,
926,
927,
930,
931,
932,
935,
937,
940,
942,
944,
1016,
1018,
1020,
1029,
1030,
1031,
1032,
1034,
1041,
1042,
1043,
1044,
1045,
1053,
1054,
1055,
1059,
1060,
1062,
1066,
1067,
1068,
1339,
1535,
1536,
8878,
8879,
8881,
8882,
8883,
8884,
8885,
8887,
8889,
8891,
8892,
8893,
8902,
8904,
8908,
8909,
8911,
8913,
8915,
8926,
8935,
8936,
8938,
8939,
8940,
8941,
8942,
8944,
8946,
10039,
10043,
10045,
10046,
10047,
10048,
10191,
10192,
10193,
10194,
10214,
10215,
10216,
10218,
10262,
10315,
10317,
10329,
10330,
10331,
10332,
10763,
10764,
10769,
10770,
10803,
10826,
10832,
10839,
10849,
10853,
10941,
10943,
10955,
10957,
10958,
10959,
10966,
10979,
10999,
11000,
11008,
11010,
11017,
11018,
11021,
11023,
11028,
11034,
11035,
11042,
11044,
11056,
11059,
11060,
11061,
11072,
11081,
11087,
11088,
11089,
11091,
11092,
11110,
11112,
11126,
11149,
11150,
11168,
11173,
11203,
11204,
11670,
11671,
11746,
11825,
12075,
12076,
12082,
12083,
12084,
12090,
12160,
12576,
12577,
13023,
13024,
13961,
13982,
13989,
13991,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_IsValueOfElementType_raw (int,int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
int ves_icall_System_GC_GetCollectionCount (int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Acos (double);
double ves_icall_System_Math_Acosh (double);
double ves_icall_System_Math_Asin (double);
double ves_icall_System_Math_Asinh (double);
double ves_icall_System_Math_Atan (double);
double ves_icall_System_Math_Atan2 (double,double);
double ves_icall_System_Math_Atanh (double);
double ves_icall_System_Math_Cbrt (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Cosh (double);
double ves_icall_System_Math_Exp (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sinh (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_Tanh (double);
double ves_icall_System_Math_FusedMultiplyAdd (double,double,double);
double ves_icall_System_Math_Log2 (double);
double ves_icall_System_Math_ModF (double,int);
float ves_icall_System_MathF_Acos (float);
float ves_icall_System_MathF_Acosh (float);
float ves_icall_System_MathF_Asin (float);
float ves_icall_System_MathF_Asinh (float);
float ves_icall_System_MathF_Atan (float);
float ves_icall_System_MathF_Atan2 (float,float);
float ves_icall_System_MathF_Atanh (float);
float ves_icall_System_MathF_Cbrt (float);
float ves_icall_System_MathF_Ceiling (float);
float ves_icall_System_MathF_Cos (float);
float ves_icall_System_MathF_Cosh (float);
float ves_icall_System_MathF_Exp (float);
float ves_icall_System_MathF_Floor (float);
float ves_icall_System_MathF_Log (float);
float ves_icall_System_MathF_Log10 (float);
float ves_icall_System_MathF_Pow (float,float);
float ves_icall_System_MathF_Sin (float);
float ves_icall_System_MathF_Sinh (float);
float ves_icall_System_MathF_Sqrt (float);
float ves_icall_System_MathF_Tan (float);
float ves_icall_System_MathF_Tanh (float);
float ves_icall_System_MathF_FusedMultiplyAdd (float,float,float);
float ves_icall_System_MathF_Log2 (float);
float ves_icall_System_MathF_ModF (float,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Read_Long (int);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw (int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
int ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw (int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
int ves_icall_CustomAttributeBuilder_GetBlob_raw (int,int,int,int,int,int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_Debugger_IsLogging ();
void ves_icall_System_Diagnostics_Debugger_Log (int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 216,
ves_icall_System_Array_InternalCreate,
// token 224,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 225,
ves_icall_System_Array_IsValueOfElementType_raw,
// token 226,
ves_icall_System_Array_CanChangePrimitive,
// token 227,
ves_icall_System_Array_FastCopy_raw,
// token 228,
ves_icall_System_Array_GetLength_raw,
// token 229,
ves_icall_System_Array_GetLowerBound_raw,
// token 230,
ves_icall_System_Array_GetGenericValue_icall,
// token 231,
ves_icall_System_Array_GetValueImpl_raw,
// token 232,
ves_icall_System_Array_SetGenericValue_icall,
// token 235,
ves_icall_System_Array_SetValueImpl_raw,
// token 236,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 409,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 410,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 412,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 440,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 441,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 442,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 462,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 463,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 464,
ves_icall_System_Enum_InternalGetCorElementType,
// token 465,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 563,
ves_icall_System_Environment_get_ProcessorCount,
// token 564,
ves_icall_System_Environment_get_TickCount,
// token 565,
ves_icall_System_Environment_get_TickCount64,
// token 568,
ves_icall_System_Environment_FailFast_raw,
// token 605,
ves_icall_System_GC_GetCollectionCount,
// token 606,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 607,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 610,
ves_icall_System_GC_SuppressFinalize_raw,
// token 612,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 614,
ves_icall_System_GC_GetGCMemoryInfo,
// token 616,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 621,
ves_icall_System_Object_MemberwiseClone_raw,
// token 629,
ves_icall_System_Math_Acos,
// token 630,
ves_icall_System_Math_Acosh,
// token 631,
ves_icall_System_Math_Asin,
// token 632,
ves_icall_System_Math_Asinh,
// token 633,
ves_icall_System_Math_Atan,
// token 634,
ves_icall_System_Math_Atan2,
// token 635,
ves_icall_System_Math_Atanh,
// token 636,
ves_icall_System_Math_Cbrt,
// token 637,
ves_icall_System_Math_Ceiling,
// token 638,
ves_icall_System_Math_Cos,
// token 639,
ves_icall_System_Math_Cosh,
// token 640,
ves_icall_System_Math_Exp,
// token 641,
ves_icall_System_Math_Floor,
// token 642,
ves_icall_System_Math_Log,
// token 643,
ves_icall_System_Math_Log10,
// token 644,
ves_icall_System_Math_Pow,
// token 645,
ves_icall_System_Math_Sin,
// token 647,
ves_icall_System_Math_Sinh,
// token 648,
ves_icall_System_Math_Sqrt,
// token 649,
ves_icall_System_Math_Tan,
// token 650,
ves_icall_System_Math_Tanh,
// token 651,
ves_icall_System_Math_FusedMultiplyAdd,
// token 652,
ves_icall_System_Math_Log2,
// token 653,
ves_icall_System_Math_ModF,
// token 746,
ves_icall_System_MathF_Acos,
// token 747,
ves_icall_System_MathF_Acosh,
// token 748,
ves_icall_System_MathF_Asin,
// token 749,
ves_icall_System_MathF_Asinh,
// token 750,
ves_icall_System_MathF_Atan,
// token 751,
ves_icall_System_MathF_Atan2,
// token 752,
ves_icall_System_MathF_Atanh,
// token 753,
ves_icall_System_MathF_Cbrt,
// token 754,
ves_icall_System_MathF_Ceiling,
// token 755,
ves_icall_System_MathF_Cos,
// token 756,
ves_icall_System_MathF_Cosh,
// token 757,
ves_icall_System_MathF_Exp,
// token 758,
ves_icall_System_MathF_Floor,
// token 759,
ves_icall_System_MathF_Log,
// token 760,
ves_icall_System_MathF_Log10,
// token 761,
ves_icall_System_MathF_Pow,
// token 762,
ves_icall_System_MathF_Sin,
// token 764,
ves_icall_System_MathF_Sinh,
// token 765,
ves_icall_System_MathF_Sqrt,
// token 766,
ves_icall_System_MathF_Tan,
// token 767,
ves_icall_System_MathF_Tanh,
// token 768,
ves_icall_System_MathF_FusedMultiplyAdd,
// token 769,
ves_icall_System_MathF_Log2,
// token 770,
ves_icall_System_MathF_ModF,
// token 896,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 905,
ves_icall_RuntimeType_make_array_type_raw,
// token 908,
ves_icall_RuntimeType_make_byref_type_raw,
// token 910,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 915,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 916,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 918,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 919,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 923,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 924,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 926,
ves_icall_System_RuntimeType_getFullName_raw,
// token 927,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 930,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 931,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 932,
ves_icall_RuntimeType_GetFields_native_raw,
// token 935,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 937,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 940,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 942,
ves_icall_RuntimeType_GetName_raw,
// token 944,
ves_icall_RuntimeType_GetNamespace_raw,
// token 1016,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 1018,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 1020,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 1029,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 1030,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 1031,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 1032,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 1034,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 1041,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 1042,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 1043,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 1044,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 1045,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 1053,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 1054,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 1055,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 1059,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 1060,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 1062,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 1066,
ves_icall_System_String_FastAllocateString_raw,
// token 1067,
ves_icall_System_String_InternalIsInterned_raw,
// token 1068,
ves_icall_System_String_InternalIntern_raw,
// token 1339,
ves_icall_System_Type_internal_from_handle_raw,
// token 1535,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1536,
ves_icall_System_ValueType_Equals_raw,
// token 8878,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 8879,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 8881,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 8882,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 8883,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 8884,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 8885,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 8887,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 8889,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 8891,
ves_icall_System_Threading_Interlocked_Read_Long,
// token 8892,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 8893,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 8902,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 8904,
mono_monitor_exit_icall_raw,
// token 8908,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 8909,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 8911,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 8913,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 8915,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 8926,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 8935,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 8936,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 8938,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 8939,
ves_icall_System_Threading_Thread_GetState_raw,
// token 8940,
ves_icall_System_Threading_Thread_SetState_raw,
// token 8941,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 8942,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 8944,
ves_icall_System_Threading_Thread_YieldInternal,
// token 8946,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 10039,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 10043,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 10045,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 10046,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 10047,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 10048,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 10191,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 10192,
ves_icall_System_GCHandle_InternalFree_raw,
// token 10193,
ves_icall_System_GCHandle_InternalGet_raw,
// token 10194,
ves_icall_System_GCHandle_InternalSet_raw,
// token 10214,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 10215,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 10216,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 10218,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 10262,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 10315,
mono_object_hash_icall_raw,
// token 10317,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 10329,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 10330,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 10331,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw,
// token 10332,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 10763,
ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw,
// token 10764,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 10769,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 10770,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 10803,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 10826,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 10832,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 10839,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 10849,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 10853,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 10941,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 10943,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 10955,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 10957,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 10958,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 10959,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 10966,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 10979,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 10999,
ves_icall_reflection_get_token_raw,
// token 11000,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 11008,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 11010,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 11017,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 11018,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 11021,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 11023,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 11028,
ves_icall_reflection_get_token_raw,
// token 11034,
ves_icall_get_method_info_raw,
// token 11035,
ves_icall_get_method_attributes,
// token 11042,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 11044,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 11056,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 11059,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 11060,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 11061,
ves_icall_reflection_get_token_raw,
// token 11072,
ves_icall_InternalInvoke_raw,
// token 11081,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 11087,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 11088,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 11089,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 11091,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 11092,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 11110,
ves_icall_InvokeClassConstructor_raw,
// token 11112,
ves_icall_InternalInvoke_raw,
// token 11126,
ves_icall_reflection_get_token_raw,
// token 11149,
ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw,
// token 11150,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 11168,
ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw,
// token 11173,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 11203,
ves_icall_reflection_get_token_raw,
// token 11204,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 11670,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 11671,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 11746,
ves_icall_CustomAttributeBuilder_GetBlob_raw,
// token 11825,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 12075,
ves_icall_ModuleBuilder_basic_init_raw,
// token 12076,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 12082,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 12083,
ves_icall_ModuleBuilder_getToken_raw,
// token 12084,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 12090,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 12160,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 12576,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 12577,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 13023,
ves_icall_System_Diagnostics_Debugger_IsLogging,
// token 13024,
ves_icall_System_Diagnostics_Debugger_Log,
// token 13961,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 13982,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 13989,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 13991,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
1,
0,
1,
1,
1,
0,
1,
0,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
0,
0,
0,
1,
0,
1,
1,
1,
1,
0,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
};
